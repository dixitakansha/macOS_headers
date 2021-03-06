//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/Banner.h>

@class NSButton, NSTextField;
@protocol WebClipBannerDelegate;

__attribute__((visibility("hidden")))
@interface WebClipBanner : Banner
{
    NSTextField *prompt;
    NSButton *cancelButton;
    NSButton *commitButton;
}

+ (BOOL)bannerHasBottomBorder;
+ (int)bannerSortOrder;
+ (id)bannerBackgroundImage;
- (void).cxx_destruct;
- (void)_updateCommitButtonKeyEquivalent;
- (void)_setPromptString:(id)arg1;
- (void)firstResponderMightHaveChanged;
- (void)confirmCropMode:(id)arg1;
- (id)bannerControlTextAttributes;
- (void)willUninstallBannerView;
- (void)didInstallBannerView;
- (void)willInstallBannerView;
- (id)bannerNibName;

// Remaining properties
@property(nonatomic) __weak id <WebClipBannerDelegate> delegate; // @dynamic delegate;

@end

