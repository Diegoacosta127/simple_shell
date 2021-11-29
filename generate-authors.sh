#!/bin/bash
echo \# This file lists all individuals having contributed content to the repository.> AUTHORS
echo \# For how it is generated, see \`generate-authors.sh\`.>> AUTHORS
git log --format=fuller | grep "Author:" | sort -u | cut -c 13- >> AUTHORS

