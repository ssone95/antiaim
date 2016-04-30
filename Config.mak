MODNAME = antiaim_mm

EXTRA_CFLAGS = -Wno-deprecated -m32 -lstdc++

SRCFILES = dllapi.cpp engine_api.cpp h_export.cpp meta_api.cpp sdk_util.cpp antiaim.cpp ann.cpp

ARCHD = i386
#ARCHD = amd64
