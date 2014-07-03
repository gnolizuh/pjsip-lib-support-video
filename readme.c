#include <pjlib.h>
#include <pjlib-util.h>
#include <pjnath.h>
#include <pjsip.h>
#include <pjsip_ua.h>
#include <pjsip_simple.h>
#include <pjsua-lib/pjsua.h>
#include <pjmedia.h>
#include <pjmedia-codec.h>

/** Link with following library:
 *
 * pjlib-i386-Win32-vc8-Debug.lib
 * pjlib-util-i386-Win32-vc8-Debug.lib
 * pjnath-i386-Win32-vc8-Debug.lib
 * pjmedia-i386-Win32-vc8-Debug.lib
 * pjmedia-codec-i386-Win32-vc8-Debug.lib
 * pjmedia-audiodev-i386-Win32-vc8-Debug.lib
 * pjmedia-videodev-i386-Win32-vc8-Debug.lib
 * pjsip-core-i386-Win32-vc8-Debug.lib
 * pjsip-ua-i386-Win32-vc8-Debug.lib
 * pjsip-simple-i386-Win32-vc8-Debug.lib
 * pjsua-lib-i386-Win32-vc8-Debug.lib
 * libgsmcodec-i386-Win32-vc8-Debug.lib
 * libilbccodec-i386-Win32-vc8-Debug.lib
 * libportaudio-i386-Win32-vc8-Debug.lib
 * libresample-i386-Win32-vc8-Debug.lib
 * libspeex-i386-Win32-vc8-Debug.lib
 * libsrtp-i386-Win32-vc8-Debug.lib
 * libg7221codec-i386-Win32-vc8-Debug.lib
 * libbaseclasses-i386-Win32-vc8-Debug.lib
 **/
int main ( int argc, char **argv )
{
	pj_status_t status = pj_init();

	return 1;
}
