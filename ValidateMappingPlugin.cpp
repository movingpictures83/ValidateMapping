#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "ValidateMappingPlugin.h"

void ValidateMappingPlugin::input(std::string file) {
 inputfile = file;
}

void ValidateMappingPlugin::run() {
   
}

void ValidateMappingPlugin::output(std::string file) {
   std::string command = "export OLDPATH=${PYTHONPATH}; export PYTHONPATH=${PYTHON2_DIST_PACKAGES}:${PYTHON2_SITE_PACKAGES}:${PYTHONPATH}; validate_mapping_file.py";
 command += " -m "+inputfile;
 command += " -o "+file+"; cp "+file+"/*.txt "+file+"/..; export PYTHONPATH=OLDPATH"; 
 std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<ValidateMappingPlugin> ValidateMappingPluginProxy = PluginProxy<ValidateMappingPlugin>("ValidateMapping", PluginManager::getInstance());
