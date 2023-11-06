#!/bin/bash
git status --ignored -s | grep '!!' | awk {'print $2'}
