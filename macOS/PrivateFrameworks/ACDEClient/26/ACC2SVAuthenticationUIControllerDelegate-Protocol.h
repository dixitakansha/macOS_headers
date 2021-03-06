//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/NSObject-Protocol.h>

@class ACC2SVTrustedDeviceObject, NSString;
@protocol ACC2SVAuthenticationUIControllerProtocol;

@protocol ACC2SVAuthenticationUIControllerDelegate <NSObject>
- (void)uiControllerHideViewAnimated:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiControllerCancelGettingImages:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiController:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1 getImageWithURL:(NSString *)arg2 completion:(void (^)(NSData *))arg3;
- (void)uiControllerUserIsUnableToReceiveVerificationCode:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiController:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1 userDidAskToResendVerificationCodeToDevice:(ACC2SVTrustedDeviceObject *)arg2;
- (void)uiControllerRefreshDeviceList:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
@end

