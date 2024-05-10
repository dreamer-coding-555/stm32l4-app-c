/*
==============================================================================
Author: Michael Gene Brockus (Dreamer)
Email: michaelbrockus@gmail.com
Organization: Fossil Logic
Description: 
    This file is part of the Fossil Logic project, where innovation meets
    excellence in software development. Michael Gene Brockus, also known as
    "Dreamer," is a dedicated contributor to this project. For any inquiries,
    feel free to contact Michael at michaelbrockus@gmail.com.
==============================================================================
*/
#ifndef FOSSIL_APP_H
#define FOSSIL_APP_H

/**
 * This section of the code includes the necessary header files provided by the Fossil Logic Software Development Kit (SDK).
 * 
 * - <fossil/xcore.h>:   Includes the core framework functionalities.
 * - <fossil/xtool.h>:   Includes base utilities for the application.
 * - <fossil/xstring.h>: Includes the string library for string manipulations.
 */
#include <fossil/xcore.h>    // core framework
#include <fossil/xtool.h>    // base utilities
#include <fossil/xstring.h>  // string library

/**
 * FossilApp structure to hold application details.
 * 
 * This structure contains the following fields:
 * - name: Pointer to the name of the application.
 * - argc: The number of command-line arguments.
 * - argv: Pointer to an array of command-line arguments.
 */
typedef struct {
    cstring name;    // Pointer to the name of the application
    cstring version; // Pointer to the name of the application
    int argc;        // The number of command-line arguments
    cstrings argv;   // Pointer to an array of command-line arguments
} FossilApp;

extern cstring FOSSIL_APP_NAME;
extern cstring FOSSIL_APP_VERSION;

#endif
