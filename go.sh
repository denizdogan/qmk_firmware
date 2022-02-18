#!/usr/bin/env bash
qmk -v json2c -o ./keyboards/kbnordic/nordic60/keymaps/denizdogan/layout.c ./denizdogan.json &&
qmk -v lint &&
qmk -v compile &&
qmk -v flash

