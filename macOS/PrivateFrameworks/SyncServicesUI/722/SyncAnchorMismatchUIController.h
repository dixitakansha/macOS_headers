//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSPanel, NSPopUpButton, NSTextField, SyncUIController;

@interface SyncAnchorMismatchUIController : NSObject
{
    SyncUIController *_syncUIController;
    NSPanel *_syncAnchorMismatchPanel;
    NSTextField *syncAnchorMismatchMajorTextField;
    NSTextField *syncAnchorMismatchMinorTextField;
    NSPopUpButton *syncAnchorMismatchPopup;
    NSButton *syncAnchorMismatchOKButton;
    int syncMode;
}

- (void)showSyncAnchorMismatchHelp:(id)arg1;
- (void)syncAnchorMismatchClosePanel:(id)arg1;
- (bycopy int)runSyncAnchorMismatchDialog:(bycopy id)arg1 forClient:(bycopy id)arg2;
- (id)initWithSyncUIController:(id)arg1;

@end

