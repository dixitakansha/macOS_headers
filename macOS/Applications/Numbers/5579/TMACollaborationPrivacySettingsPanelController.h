//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSTextField, NSView, TSKMacURLLinkedTextField;

@interface TMACollaborationPrivacySettingsPanelController : NSWindowController
{
    BOOL _shouldShowCloseDocumentButton;
    NSTextField *_titleLabel;
    NSTextField *_messageLabel;
    TSKMacURLLinkedTextField *_learnMoreLabel;
    NSTextField *_privacyLabel;
    NSButton *_closeButton;
    NSView *_borderView;
    NSImageView *_appImage;
}

@property NSImageView *appImage; // @synthesize appImage=_appImage;
@property NSView *borderView; // @synthesize borderView=_borderView;
@property NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property NSTextField *privacyLabel; // @synthesize privacyLabel=_privacyLabel;
@property TSKMacURLLinkedTextField *learnMoreLabel; // @synthesize learnMoreLabel=_learnMoreLabel;
@property NSTextField *messageLabel; // @synthesize messageLabel=_messageLabel;
@property NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property BOOL shouldShowCloseDocumentButton; // @synthesize shouldShowCloseDocumentButton=_shouldShowCloseDocumentButton;
- (void)p_dismissWindowWithCode:(long long)arg1;
- (void)continuePressed:(id)arg1;
- (void)closePressed:(id)arg1;
- (id)attributedStringForHTMLString:(id)arg1 fontSize:(double)arg2;
- (void)windowDidLoad;
- (id)init;

@end

