dir = include_directories('.')
code = files('system.c', 'syscalls.c')

executable('firmware.elf',
    sources: ['main.c', code],
    include_directories: dir,
    # dependencies: deps, # temp comment for later test with STM32 wrap file packages
    install: true)

# Custom target to generate binary file
bin = custom_target('bin',
    input: 'firmware.elf',
    output: 'firmware.bin',
    command: [find_program('objcopy'), '-O', 'binary', '@INPUT@', '@OUTPUT@'],
    build_by_default: true,
    depends: ['firmware.elf']
)

stm32flash = find_program('st-flash', required: false)
if stm32flash.found()
    # Flash target if st-flash is found
    run_target('flash',
        command: [stm32flash, '--reset', 'write', '@INPUT@', '0x08000000'],
        depends: [bin]
    )
endif
