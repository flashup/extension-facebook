#import <FBSDKShareKit/FBSDKAppInviteDialog.h>
#import <FBSDKShareKit/FBSDKGameRequestDialog.h>
#import <FBSDKShareKit/FBSDKSharing.h>
#import <UIKit/UIKit.h>

@class CallbacksDelegate;

@interface CallbacksDelegate : NSObject <
	FBSDKAppInviteDialogDelegate,
	FBSDKGameRequestDialogDelegate,
	FBSDKSharingDelegate
>

@end

@interface NMEAppDelegate : NSObject <UIApplicationDelegate>
@end

@interface NMEAppDelegate (CallbacksDelegate)
@end
