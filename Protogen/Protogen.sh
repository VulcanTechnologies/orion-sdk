#!/bin/sh

PLATFORM=`uname -m 2>/dev/null`
ROOT_DIR=`dirname $0`

if [ "`uname`" = "Darwin" ]; then
    ARCH=Mac/ProtoGen.app/Contents/MacOS
elif [ "$PLATFORM" = "i686" ]; then
    ARCH=Linux/x86
elif [ "$PLATFORM" = "x86_64" ]; then
    ARCH=Linux/x64
elif uname -m | grep arm > /dev/null; then
    ARCH=Linux/arm
else
    echo "Unrecognized platform $PLATFORM"
    exit 1
fi

$ROOT_DIR/$ARCH/ProtoGen $@

