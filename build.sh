#!/bin/bash

FOLDER=${1:-.}     # Default to current directory if no argument given
OUT=${2:-myprogram}

if [[ -z $FOLDER ]]; then
  echo "Usage: $0 folder-containing-maincpp [optional-output-name]"
  exit 1
fi

MAIN="$FOLDER/main.cpp"

if [[ ! -f "$MAIN" ]]; then
  echo "Error: $MAIN not found."
  exit 1
fi

cd "$(dirname "$0")" || { echo "Failed to cd to script directory"; exit 1; }

OUTDIR=$(dirname "$MAIN")
mkdir -p "$OUTDIR"

# Expand globs safely even if no matches (bash only)
shopt -s nullglob

clang++ -std=c++20 -Wall -Wextra "$MAIN" myFn/*.cpp -Iheaders -o "$OUTDIR/$OUT"

if [[ $? -eq 0 ]]; then
