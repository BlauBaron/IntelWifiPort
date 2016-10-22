/* add your code here */
#include <IOKit/IOService.h>

class im_najd_git_IntelWireless: public IOService

{
    
    OSDeclareDefaultStructors(im_najd_git_IntelWireless)
    
public:
    
    virtual bool init(OSDictionary *dictionary = 0) override;
    
    virtual void free(void) override;
    
    virtual IOService *probe(IOService *provider, SInt32 *score) override;
    
    virtual bool start(IOService *provider) override;
    
    virtual void stop(IOService *provider) override;
    
};