//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface BTTMenuHoverButton : NSButton
{
    NSImage *_hoverImage;
    NSImage *_mainImage;
}

@property(retain, nonatomic) NSImage *mainImage; // @synthesize mainImage=_mainImage;
@property(retain, nonatomic) NSImage *hoverImage; // @synthesize hoverImage=_hoverImage;
- (void).cxx_destruct;
- (void)createTrackingArea;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;

@end

