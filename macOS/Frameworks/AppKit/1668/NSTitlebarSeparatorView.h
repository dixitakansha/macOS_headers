//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSTitlebarSeparatorView : NSView
{
    long long _type;
}

- (BOOL)ignoreHitTest;
- (struct CGSize)intrinsicContentSize;
- (void)_windowChangedKeyState;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (int)_vibrancyBlendMode;
- (BOOL)allowsVibrancy;
- (id)_cuiOptions;
@property long long type;

@end

