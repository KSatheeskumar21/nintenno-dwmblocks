# Maintainer: Kishore Satheeskumar <k.sath214@gmail.com>
pkgname=nintenno-dwmblocks
pkgver=1.0.xx.xxxxxx
pkgrel=1
epoch=
pkgdesc="My build of Dwmblocks at https://github.com/KSatheeskumar21/nintenno-dwmblocks"
arch=(x86_64)
url="https://github.com/KSatheeskumar21/nintenno-dwmblocks"
license=('GPL')
groups=()
depends=(nerd-fonts-source-code-pro ttf-joypixels libxft-bgra-git)
makedepends=(make)
checkdepends=()
optdepends=()
provides=(dwmblocks)
conflicts=(dwmblocsk)
replaces=()
backup=()
options=()
changelog=
source=("git+$url")
noextract=()
md5sums=('SKIP')
validpgpkeys=()

pkgver() {
	cd "${_pkgname}"
	printf "1.0.r%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

package() {
	cd "$pkgname"
	mkdir -p ${pkgdir}/opt/${pkgname}
	cp -rf * ${pkgdir}/opt/${pkgname}
	make PREFIX=/usr DESTDIR="${pkgdir}" install
	install -Dm644 LICENSE "${pkgdir}/usr/share/licenses/nintenno-dwmblocks/LICENSE"
}
