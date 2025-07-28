#!/bin/bash

FOLDER=${1:-.}
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

OUTDIR=$(dirname "$MAIN")
mkdir -p "$OUTDIR"

shopt -s nullglob

clang++ -std=c++20 -Wall -Wextra "$MAIN" myFn/*.cpp -Iheaders -o "$OUTDIR/$OUT"

if [[ $? -eq 0 ]]; then
  echo "Build succeeded: $OUTDIR/$OUT"
else
  echo "Build failed."
  exit 1
fi
