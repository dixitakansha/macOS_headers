//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MFLibraryUpgrader, NSError;

@protocol MFLibraryUpgraderDelegate <NSObject>
- (void)upgrader:(MFLibraryUpgrader *)arg1 didFailWithError:(NSError *)arg2;
- (void)upgraderDidFinish:(MFLibraryUpgrader *)arg1;
@end

