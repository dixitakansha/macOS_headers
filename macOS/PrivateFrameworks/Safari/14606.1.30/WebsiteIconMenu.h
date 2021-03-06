//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSMenu.h>

#import <Safari/NSMenuDelegate-Protocol.h>

@class NSString;
@protocol NSMenuDelegate;

__attribute__((visibility("hidden")))
@interface WebsiteIconMenu : NSMenu <NSMenuDelegate>
{
    id <NSMenuDelegate> _forwardDelegate;
}

- (void).cxx_destruct;
- (void)menuWillOpen:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

