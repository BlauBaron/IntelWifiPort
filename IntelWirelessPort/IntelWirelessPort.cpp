/* add your code here */
#include <IOKit/IOLib.h>

#include "IntelWirelessPort.hpp"
extern "C"{


#include "linux-porting.h"
#include "net80211/ieee80211.h"
#include "driver/if_iwmreg.h"
#include "driver/if_iwm_pcie_trans.h"


#include "driver/if_iwmvar.h"
#include "driver/if_iwm_util.h"
#include "driver/if_iwm_time_event.h"
#include "driver/if_iwm_scan.h"
#include "driver/if_iwm_power.h"
#include "driver/if_iwm_phy_db.h"
#include "driver/if_iwm_phy_ctxt.h"
#include "driver/if_iwm_mac_ctxt.h"
#include "driver/if_iwm_debug.h"
#include "driver/if_iwm_binding.h"
//#include ""
}
#define super IOService

OSDefineMetaClassAndStructors (im_najd_git_IntelWireless, IOService)


bool im_najd_git_IntelWireless::init(OSDictionary *dictionary) {
    bool result = super::init(dictionary);
    IOLog("Initializing The Driver \n");
    return result;
}

void im_najd_git_IntelWireless::free(void){
    IOLog("Freeing The Driver\n");
    super::free();
    
}
IOService* im_najd_git_IntelWireless::probe(IOService *provider, SInt32 *score){
    IOService *result = super::probe(provider, score);
    IOLog("Probing The Driver\n");
    return result;
    
}

bool im_najd_git_IntelWireless::start(IOService *provider){
    bool result = super::start(provider);
    IOLog("Starting The Driver\n");
    return result;
    
}

void im_najd_git_IntelWireless::stop(IOService *provider){
    IOLog("Stopping The driver\n");
    super::stop(provider);
}