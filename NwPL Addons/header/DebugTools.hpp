#pragma once
#ifndef NWPL_DEBUG_TOOLS_HPP
#define NWPL_DEBUG_TOOLS_HPP

// You may delete this if you know how to add "DEBUG=true" define in gcc or any other compiler u're using.
#ifndef DEBUG
	#define DEBUG true
#endif//DEBUG

#if DEBUG
	#include <iostream>
	#include <windows.h>
	#define LOG(NWPL_TEXT)  std::cout << "\033[11m[LOG]" << NWPL_TEXT << "\033[0m\n"
	#define ERR(NWPL_TEXT)  std::cout << "\033[101m[ERROR]" << NWPL_TEXT << "\033[0m\n"; exit(-1)
	#define NOTE(NWPL_TEXT) std::cout << "\033[11m[NOTE]" << NWPL_TEXT << "\033[0m\n"
	#define WARN(NWPL_TEXT) std::cout << "\033[103m[WARN]" << NWPL_TEXT << "\033[0m\n"
#else
	#define LOG(NWPL_TEXT)
	#define ERR(NWPL_TEXT)
	#define NOTE(NWPL_TEXT)
	#define WARN(NWPL_TEXT)
#endif

#endif//NWPL_DEBUG_TOOLS_HPP
