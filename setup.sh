SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
git clone "https://codeberg.org/bzt/posix-uefi" "$SCRIPT_DIR/../"
ln -s "$SCRIPT_DIR/../posix-uefi/uefi" "$SCRIPT_DIR/uefi"

