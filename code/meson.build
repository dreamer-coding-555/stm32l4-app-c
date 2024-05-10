dir = include_directories('.')
code = files('syscalls.c', 'system.c')

executable('firmware.elf',
    sources: ['main.c', code],
    include_directories: dir,
    dependencies: deps,
    install: true)
