//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PrefsController : NSObject
{
    NSString *_computerName;
    BOOL prefsWindowCanClose;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *computerName; // @synthesize computerName=_computerName;
- (void)resetPreferences:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)hideDockIcon;
- (void)showDockIcon;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)awakeFromNib;
- (void)setSelectedItemOfDictionaryController:(id)arg1 toKey:(id)arg2;

@end

