//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSString, NSView, NSVisualTabPickerTileContainerView;

@protocol NSVisualTabPickerTileContainerDataSource <NSObject>
- (NSView *)visualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1 viewForTileAtIndex:(unsigned long long)arg2;
- (NSString *)visualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1 titleForTileAtIndex:(unsigned long long)arg2;
- (NSString *)titleForNSVisualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1;
- (unsigned long long)numberOfTilesInNSVisualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1;
@end

