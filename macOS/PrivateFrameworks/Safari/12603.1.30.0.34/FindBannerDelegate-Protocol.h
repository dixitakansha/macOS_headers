//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/BannerDelegate-Protocol.h>

@class FindBanner, NSString;

@protocol FindBannerDelegate <BannerDelegate>

@optional
- (void)findBanner:(FindBanner *)arg1 highlightAllMatchesForString:(NSString *)arg2 findOptions:(unsigned int)arg3 maximumNumberOfMatches:(unsigned long long)arg4;
- (void)findBanner:(FindBanner *)arg1 startFindingString:(NSString *)arg2 findOptions:(unsigned int)arg3 maximumNumberOfMatches:(unsigned long long)arg4;
- (void)hideFindOverlayForBanner:(FindBanner *)arg1;
- (BOOL)shouldUpdateFindPasteboardForBanner:(FindBanner *)arg1;
- (BOOL)isReadyToFindForBanner:(FindBanner *)arg1;
@end

