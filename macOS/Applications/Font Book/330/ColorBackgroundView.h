//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface ColorBackgroundView : NSView
{
    long long _tag;
    NSColor *_color;
}

- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setTag:(long long)arg1;
- (long long)tag;
- (void)dealloc;

@end

