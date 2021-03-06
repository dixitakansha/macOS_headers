//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSBundle;

@interface NCRelativeDateTransformer : NSValueTransformer
{
    NSBundle *bundleForLocalization;
    BOOL _longFormat;
}

+ (Class)transformedValueClass;
@property(readonly) NSBundle *bundleForLocalization; // @synthesize bundleForLocalization;
- (void).cxx_destruct;
- (id)_transformedValue:(id)arg1 allDay:(BOOL)arg2 duration:(id)arg3 isRelative:(_Bool *)arg4;
- (id)transformedValue:(id)arg1;
- (id)snoozeStringForInterval:(double)arg1 before:(_Bool)arg2;
- (id)stringForDate:(id)arg1 allDay:(BOOL)arg2;
- (id)stringForDate:(id)arg1 allDay:(BOOL)arg2 duration:(id)arg3 isRelative:(_Bool *)arg4;
- (id)initWithLocalizerBundle:(id)arg1 longFormat:(BOOL)arg2;

@end

