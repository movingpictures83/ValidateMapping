# ValidateMapping
# Language: C++
# Input: TXT
# Output: TXT
# Tested with: PluMA 1.0, GCC 4.8.4

Validate a mapping file matches FASTQ data using Qiime (Caporaso et al, 2010)

The plugin accepts as input a mapping file in TXT format and will output the fixed
mapping file as another TXT file.

Note: Qiime scripts must be in your system PATH for this to work properly.
This plugin is compatible with Qiime 1 which uses Python 2, so you must also set
the environment variables PYTHON2_DIST_PACKAGES and PYTHON2_SITE_PACKAGES to their
appropriate locations, to work with PluMA which has since been upgraded to Python 3.
