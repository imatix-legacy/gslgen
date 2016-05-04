# GSLgen v2.0

GSLgen is an early code generator from iMatix Corporation.

The tool was later renamed "GSL" and development continued at:

<https://github.com/imatix/gsl>

This repository holds the 1999 and early 2000 releases of GSLgen, 
retrieved from:

*  http://legacy.imatix.com/pub/tools

*  http://legacy.imatix.com/html/gslgen

on 2016-04-25.

These are kept for historic reference; any new usage of `GSL`, should
use the modern version at <https://github.com/imatix/gsl>.

The original license terms are in [license.txt](license.txt) and
are fairly detailed.  In brief summary the code can be used under
the GPL v2, *or* under a custom license with an advertising clause;
read [license.txt](license.txt) for details.

On [2016-04-29 it was also released under the
MPLv2](https://github.com/imatix-legacy/license) ([license
text](https://imatix-legacy.github.io/license/MPLv2.html)), so `gslgen` can
be used under the GPLv2, the MPLv2, or the custom license with
an advertsing clause.

For more information see the [GSLgen
Documentation](https://imatix-legacy.github.io/gslgen/gsldoc.htm).

## `doc`

The `doc` directory contains the contents of the `doc` directory 
unpacked from `pub/gslsrc20.zip`, for ease of reference.

This documentation appears to have been built with `htmlpp` from 
`src/gsldoc.txt` and the associated `src/*.def` files, but the
exact documentation build command is unknown.

## `pub`

The `pub` directory contains the released artefacts (binaries and
source archives), which are still retrievable.  Due to their small size 
(well under 1MB each), and the fact that development of this historic
version ceased many years ago (so there will not be growth in the 
archive), these are added directly into the git repository.

## `src`

The `src` directory contains the contents of the `src` directory
unpacked from `pub/gslsrc20.zip`, for ease of reference. 

See [license.txt](license.txt) for details of the license for this
code.

(The `src` directory also includes a version of the iMatix SFL,
in `src/sfl`.)

## `website`

The `website` directory contains the minimal (one page) website which
was at: 

http://legacy.imatix.com/html/gslgen/

(This appears to have been built with `htmlpp`, but there is no known
copy of the `htmlpp` source for this website.)
