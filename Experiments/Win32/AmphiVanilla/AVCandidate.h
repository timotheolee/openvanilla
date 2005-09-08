#ifndef AVCandidate_h
#define AVCandidate_h
#include "OpenVanilla.h"
#include "AVDisplayServer.h"
#include <string>
using std::string;

class AVCandidate : public OVCandidate  {
public:
    AVCandidate(AVDisplayServer* svr);
    virtual OVCandidate* clear();
    virtual OVCandidate* append(const char *s);
    virtual OVCandidate* hide();
    virtual OVCandidate* show();
    virtual OVCandidate* update();
    virtual int onScreen();

protected:
    string candistr;
    int onscreen;
    AVDisplayServer *dsvr;
};
#endif // AVCandidate_h