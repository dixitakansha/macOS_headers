//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SmallDialogController.h"

@class MAProgressIndicatorStandard, NSBox, NSString, NSTextField, NSView, NSWindow;

@interface ProgressController : SmallDialogController
{
    NSTextField *text1;
    NSTextField *text2;
    NSTextField *text3;
    MAProgressIndicatorStandard *progress;
    NSBox *sepLine;
    NSView *cmdPeriod;
    long long reachedVal;
    long long maxVal;
    int cText1;
    NSString *cText2;
    BOOL fCmdPeriodShown;
    BOOL fSecondLineShown;
    NSWindow *previousKeyWindow;
}

+ (id)show;
+ (id)showWithTextID:(int)arg1;
+ (id)showWithText:(id)arg1;
+ (id)nibName;
- (void)close;
- (void)windowWillClose:(id)arg1;
- (void)setSecondLineVisible:(BOOL)arg1;
- (void)setCmdPeriodVisible:(BOOL)arg1;
- (void)doBarberPole;
- (void)setIndeterminate:(BOOL)arg1;
- (void)showMaxValue:(long long)arg1;
- (void)showReachedValue:(long long)arg1;
- (void)showText3:(id)arg1;
- (void)showText2:(id)arg1 withQuotes:(BOOL)arg2;
- (void)showText2ID:(int)arg1;
- (void)showText1:(id)arg1;
- (void)showText1ID:(int)arg1;
- (void)_showText1:(id)arg1;
- (void)updateUI;
- (void)showWindow:(id)arg1;
- (void)awakeFromNib;

@end

