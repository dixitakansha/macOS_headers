//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSACollaborationConnectionStatusHUDController.h"

@class NSFont, NSTextField, NSView;

@interface TMACollaborationConnectionStatusHUDController : TSACollaborationConnectionStatusHUDController
{
    BOOL _setupComplete;
    BOOL _clicked;
    NSTextField *_statusTextView;
    NSView *_accessoryView;
}

@property(nonatomic) BOOL clicked; // @synthesize clicked=_clicked;
@property(nonatomic) BOOL setupComplete; // @synthesize setupComplete=_setupComplete;
@property(retain, nonatomic) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) NSTextField *statusTextView; // @synthesize statusTextView=_statusTextView;
- (void).cxx_destruct;
- (void)p_layoutSubviews;
- (double)spacing;
@property(readonly, nonatomic) NSFont *statusViewFont;
- (id)accessoryImageName;
- (void)clickedHUDView:(id)arg1;
- (void)setupView;
- (void)showHUDInView:(id)arg1;

@end

