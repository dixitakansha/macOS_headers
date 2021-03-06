//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EITNumberFormatMapper : NSObject
{
}

+ (id)percentFormat:(id)arg1;
+ (id)chartNumberFormatWithFormat:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
+ (id)conditionalFormattingForEDContentFormat:(id)arg1 state:(id)arg2;
+ (id)mapCellFormatFromContentFormat:(id)arg1 isTextCell:(_Bool)arg2 returnNeedsConditionalFormatForNegatives:(_Bool *)arg3 state:(id)arg4;
+ (id)mapFormat:(id)arg1 skipFlexibleSpaces:(_Bool)arg2 state:(id)arg3;
+ (void)mapContentFormatFromEDCell:(struct EDCellHeader *)arg1 row:(int)arg2 to:(id)arg3 state:(id)arg4;
+ (id)cacheContentFormat:(id)arg1 state:(id)arg2;
+ (void)cacheContentFormats:(id)arg1 state:(id)arg2;
+ (_Bool)isDurationFormat:(int)arg1;
+ (_Bool)isDateTimeFormat:(int)arg1;
+ (_Bool)isNumberFormat:(int)arg1;
+ (id)p_customFormatWithKeyIfValid:(id)arg1 formatType:(int)arg2 locale:(id)arg3;
+ (void)mapContentFormat:(id)arg1 to:(id)arg2 cellID:(struct TSUCellCoord)arg3 isTextCell:(_Bool)arg4 state:(id)arg5;
+ (void)mapNumberFormattingWarnings:(id)arg1 textOnly:(_Bool)arg2 to:(id)arg3;
+ (id)nextCustomFormatNameFromState:(id)arg1;
+ (void)mapInterstitials:(id)arg1 strings:(id)arg2 indices:(id)arg3;
+ (id)customNumberFormat:(id)arg1 skipFlexibleSpaces:(_Bool)arg2 state:(id)arg3;
+ (id)customFormat:(id)arg1 applyPrefixSuffix:(_Bool)arg2 skipFlexibleSpaces:(_Bool)arg3 state:(id)arg4;
+ (id)durationFormat:(id)arg1 state:(id)arg2;
+ (id)mapCustomDurationFormat:(id)arg1 state:(id)arg2;
+ (id)dateTimeFormat:(id)arg1 state:(id)arg2;
+ (id)mapCustomDateTimeFormat:(id)arg1 state:(id)arg2;
+ (id)numberFormatFromBranch:(id)arg1 branchIndex:(unsigned int)arg2 inConditionalFormat:(_Bool)arg3 skipFlexibleSpaces:(_Bool)arg4 state:(id)arg5;
+ (id)generalFormat:(id)arg1;
+ (id)preserveApostrophes:(id)arg1;
+ (id)applyNegativeStyleToFormatString:(id)arg1 negativeStyle:(int)arg2;
+ (id)mapCustomNumberFormatData:(id)arg1 applyPrefixSuffix:(_Bool)arg2 skipFlexibleSpaces:(_Bool)arg3;
+ (id)mapCellCustomTextFormat:(id)arg1 edContentFormat:(id)arg2 state:(id)arg3;
+ (id)mapCellCustomFormat:(id)arg1 edContentFormat:(id)arg2 returnNeedsConditionalFormatForNegatives:(_Bool *)arg3 state:(id)arg4;
+ (id)mapCellFormat:(id)arg1;
+ (void)setAutomaticContentFormat:(id)arg1 forDecimalPlaces:(unsigned int)arg2 isExplicit:(_Bool)arg3 state:(id)arg4;
+ (int)tsDurationStyle:(int)arg1;
+ (int)tsDurationUnit:(int)arg1;
+ (int)tsFractionAccuracy:(int)arg1;
+ (int)tsuNegativeStyle:(int)arg1;
+ (int)tsuNumberValueTypeForNumberFormatType:(int)arg1;

@end

