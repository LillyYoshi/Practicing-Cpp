@ -0,0 +1,20 @@
#!/bin/bash

MAIN=${1}
OUT=${2:-myprogram}

if [[ -z $MAIN ]]; then
  echo "Usage: $0 path/to/main.cpp [optional-output-name]"
  exit 1
fi

cd "$(dirname "$0")" || { echo "Failed to cd to script directory"; exit 1; }

OUTDIR=$(dirname "$MAIN")
mkdir -p "$OUTDIR"

# Optional: set bash to expand globs to empty if no matches, avoids errors if no cpp files there
shopt -s nullglob

# Use the $MAIN argument here instead of hardcoded main.cpp
clang++ -std=c++20 -Wall -Wextra "$MAIN" myFn/*.cpp -Iheaders -o "$OUTDIR/$OUT"