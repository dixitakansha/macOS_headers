//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSComboBox, NSString;

@protocol NSComboBoxDataSource <NSObject>

@optional
- (id)comboBox:(NSComboBox *)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(NSComboBox *)arg1;
- (NSString *)comboBox:(NSComboBox *)arg1 completedString:(NSString *)arg2;
- (long long)comboBox:(NSComboBox *)arg1 indexOfItemWithStringValue:(NSString *)arg2;
@end

