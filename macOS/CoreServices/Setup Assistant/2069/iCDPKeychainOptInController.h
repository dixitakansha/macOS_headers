//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "iCloudViewControllerBase.h"

@class NSButton;

@interface iCDPKeychainOptInController : iCloudViewControllerBase
{
    BOOL _showSpinner;
    unsigned long long _setupKeychainOrNot;
    NSButton *_aboutButton;
}

@property __weak NSButton *aboutButton; // @synthesize aboutButton=_aboutButton;
@property BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
@property unsigned long long setupKeychainOrNot; // @synthesize setupKeychainOrNot=_setupKeychainOrNot;
- (void).cxx_destruct;
- (void)showInfoSheet:(id)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (id)nextViewIdentifier;

@end

