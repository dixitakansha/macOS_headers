//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class TMABackgroundView;

@interface TNMacTabBackgroundView : NSView
{
    BOOL _wellVisible;
    BOOL _inPrintPreview;
    BOOL _selected;
    BOOL _alwaysTransparent;
    TMABackgroundView *_backgroundView;
    TMABackgroundView *_dividerView;
}

+ (double)bottomDividerHeight;
@property(retain, nonatomic) TMABackgroundView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) TMABackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL alwaysTransparent; // @synthesize alwaysTransparent=_alwaysTransparent;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL inPrintPreview; // @synthesize inPrintPreview=_inPrintPreview;
@property(nonatomic) BOOL wellVisible; // @synthesize wellVisible=_wellVisible;
- (void).cxx_destruct;
- (void)p_updateColors;
- (id)initWithFrame:(struct CGRect)arg1;

@end

