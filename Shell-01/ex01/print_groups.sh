#!/bin/bsh
groups $FT_USER | sed 's/ /,/g' | tr -d '\n'

