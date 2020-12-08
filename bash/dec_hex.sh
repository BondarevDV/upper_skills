#!/bin/bash



B=16


if [ -z "$2" ]; then
	echo "использование dex_hex число"
fi


echo ""$1" "$B" o p " | dc
