//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSImage;

@interface InfoTabButtonCell : NSButtonCell
{
    NSImage *fIcon;
    BOOL fSelected;
}

- (void)updateControlTint:(id)arg1;
- (void)setSelectedTab:(BOOL)arg1;
- (void)setControlView:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

