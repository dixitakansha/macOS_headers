//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IASUtilities/IASLocalSecretPrompt.h>

#import <AuthKitUI/IASLocalSecretDelegate-Protocol.h>

@class NSString, NSView;

@interface AKPromptForLocalSecret : IASLocalSecretPrompt <IASLocalSecretDelegate>
{
    long long _onceToken;
    NSString *_cachedFullUserName;
    NSView *_hostView;
    CDUnknownBlockType _defaultAction;
}

+ (void)getLocalSecretWithHostView:(id)arg1 withDisplayImage:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(copy) CDUnknownBlockType defaultAction; // @synthesize defaultAction=_defaultAction;
@property(retain) NSView *hostView; // @synthesize hostView=_hostView;
@property(copy) NSString *cachedFullUserName; // @synthesize cachedFullUserName=_cachedFullUserName;
@property long long onceToken; // @synthesize onceToken=_onceToken;
- (void).cxx_destruct;
- (id)userFullName;
- (void)secretEntered:(id)arg1;
- (void)secretEntryCancelled;
- (void)switchToView:(id)arg1;
- (void)showLocalSecret;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

