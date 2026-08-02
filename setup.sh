SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
mkdir -p "$SCRIPT_DIR/../lib/"
git clone "https://codeberg.org/bzt/posix-uefi" "$SCRIPT_DIR/../lib/"
ln -s "$SCRIPT_DIR/../posix-uefi/uefi" "$SCRIPT_DIR/uefi"

