//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CodaTextView.h"

__attribute__((visibility("hidden")))
@interface WebScriptCodaTextView : CodaTextView
{
}

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
- (id)editor;
- (id)script_currentWordRange;
- (id)script_previousWordRange;
- (id)script_stringWithRange:(id)arg1;
- (id)script_rangeOfCurrentLine;
- (void)script_setSelectedRange:(id)arg1;
- (void)script_replaceCharactersInRange:(id)arg1 withPlaceholderNamed:(id)arg2;
- (void)script_replaceCharactersInRange:(id)arg1 withString:(id)arg2;
- (id)script_selectedRange;
- (long long)script_getLine;
- (long long)script_getColumn;

@end

