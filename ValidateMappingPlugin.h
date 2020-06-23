#ifndef VALIDATEMAPPINGPLUGIN_H
#define VALIDATEMAPPINGPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class ValidateMappingPlugin : public Plugin
{
public: 
 std::string toString() {return "ValidateMapping";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
