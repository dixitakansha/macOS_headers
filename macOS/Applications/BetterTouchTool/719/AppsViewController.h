//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BTTPreferencesAppsController;

__attribute__((visibility("hidden")))
@interface AppsViewController : NSObject
{
    BOOL removeButtonEnabled;
    BTTPreferencesAppsController *_bttAppController;
}

@property(retain, nonatomic) BTTPreferencesAppsController *bttAppController; // @synthesize bttAppController=_bttAppController;
@property(nonatomic) BOOL removeButtonEnabled; // @synthesize removeButtonEnabled;
- (void)dealloc;
- (id)init;
- (void)changedScrollingState:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;

@end

