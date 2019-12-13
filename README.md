# What?

This repository is an attempt to produce an immediately usable (no
patches required) maintained (open issues are to be resolved)
non-distribution specific version of the SLiM display manager that
works both with and without systemd, and, eventually, with both X11
and Wayland.

# What is SLiM?

SLiM (Simple Login Manager) is a graphical login manager (display
manager). It aims to be simple, fast and independent from the various
desktop environments. SLiM is based on Login.app by Per Lidén.

# Features

- External themes and configuration
- PNG support with alpha transparency for panel
- PNG / JPEG support for backgrounds
- XFT / freetype support
- Double or single (GDM-style) inputbox support
- CMake build procedure
- Lightweight

# Installation

See the `INSTALL` file.

# Usage

To launch slim, execute run the `slim` binary. Run `slim -h` for
available options.

Enter username and password to login. Special usernames (commands
configurable in the config file):

- `console`: start console login
- `exit`: exit SLiM
- `halt`: halt the system
- `reboot`: reboot the system

Pressing the `F1` key changes the session type. The `~/.xinitrc` file
is executed by default, so be sure to have a working `.xinitrc` file
in your home.

Pressing the `F11` key executes a user-specified command (see the
configuration file), the default is to take a screenshot if the
`import` program is available.

# Configuration

`slim.conf` is the main configuration file. Options are explained in
the file itself.

# Themes

See `THEMES` file.

# Development

This repository started from a rebase of
https://github.com/iwamatsu/slim (also
https://github.com/gsingh93/slim-display-manager, which is a GitHub
mirror of the original BerliOS repository http://slim.berlios.de/,
which is dead, also archived at
https://sourceforge.net/projects/slim.berlios/; at the moment of
creation of this repository all archived versions matched) on top of
the common ancestor of https://github.com/iwamatsu/slim and
https://github.com/AeroNotix/slim-git to produce a repository with all
of the commit history of SLiM 1.3.6 (see `the-rebase` branch). Then,
all the non-distribution-specific patches of
https://github.com/AeroNotix/slim-git,
https://github.com/axs-gentoo/slim-git,
https://gitweb.gentoo.org/repo/gentoo.git/tree/x11-misc/slim/files,
https://gitweb.gentoo.org/proj/musl.git/tree/x11-misc/slim/files, and
https://github.com/NixOS/nixpkgs were applied on top. Most patches
were edited to keep the original code style of SLiM.

# Copyright

SLiM is copyright (c) 2004-2019 by Simone Rota, Johannes Winkelmann,
Nobuhiro Iwamatsu and many other contributors (see commit log) and is
available under the GNU General Public License version 2. See the
`COPYING` file for the complete license.

Image handling code adapted and extended from xplanet 1.0.1, copyright
(c) 2002-2004 by Hari Nair.

Login.app is copyright (c) 1997, 1998 by Per Lidén and is licensed
under the GNU General Public License version 2.
