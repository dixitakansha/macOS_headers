//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/_GEODataSessionTaskRulesHelper.h>

__attribute__((visibility("hidden")))
@interface _GEODataSessionTaskRulesRaceXPCvsHTTP : _GEODataSessionTaskRulesHelper
{
    double _xpcTaskStartTime;
    BOOL _xpcTaskDidComplete;
    int _requestKind;
}

- (void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2;
- (BOOL)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3;
- (BOOL)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3;

@end

