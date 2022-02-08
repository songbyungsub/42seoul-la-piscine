#!/bin/bash
ifconfig -a | grep 'ether ' | tr -d '\t' | sed 's/ether //g' |tr -d ' '
