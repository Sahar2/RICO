#include "RicoRegistry.h"

/////////////////////////////////////////////////////////////////////////////////////////

RegistryID RicoRegistry::registry_id = 1;

map<RegistryID, RicoPtr> * RicoRegistry::rico_registry = new map<RegistryID, RicoPtr>();

/////////////////////////////////////////////////////////////////////////////////////////
