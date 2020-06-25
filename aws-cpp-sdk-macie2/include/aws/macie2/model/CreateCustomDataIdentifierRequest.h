﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class AWS_MACIE2_API CreateCustomDataIdentifierRequest : public Macie2Request
  {
  public:
    CreateCustomDataIdentifierRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomDataIdentifier"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain up to 120 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see the identifier's description,
     * depending on the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain up to 120 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see the identifier's description,
     * depending on the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain up to 120 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see the identifier's description,
     * depending on the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain up to 120 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see the identifier's description,
     * depending on the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain up to 120 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see the identifier's description,
     * depending on the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain up to 120 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see the identifier's description,
     * depending on the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain up to 120 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see the identifier's description,
     * depending on the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain up to 120 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see the identifier's description,
     * depending on the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An array that lists specific character sequences (ignore words) to exclude
     * from the results. If the text matched by the regular expression is the same as
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4 - 90 characters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIgnoreWords() const{ return m_ignoreWords; }

    /**
     * <p>An array that lists specific character sequences (ignore words) to exclude
     * from the results. If the text matched by the regular expression is the same as
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4 - 90 characters.</p>
     */
    inline bool IgnoreWordsHasBeenSet() const { return m_ignoreWordsHasBeenSet; }

    /**
     * <p>An array that lists specific character sequences (ignore words) to exclude
     * from the results. If the text matched by the regular expression is the same as
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4 - 90 characters.</p>
     */
    inline void SetIgnoreWords(const Aws::Vector<Aws::String>& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords = value; }

    /**
     * <p>An array that lists specific character sequences (ignore words) to exclude
     * from the results. If the text matched by the regular expression is the same as
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4 - 90 characters.</p>
     */
    inline void SetIgnoreWords(Aws::Vector<Aws::String>&& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords = std::move(value); }

    /**
     * <p>An array that lists specific character sequences (ignore words) to exclude
     * from the results. If the text matched by the regular expression is the same as
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4 - 90 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithIgnoreWords(const Aws::Vector<Aws::String>& value) { SetIgnoreWords(value); return *this;}

    /**
     * <p>An array that lists specific character sequences (ignore words) to exclude
     * from the results. If the text matched by the regular expression is the same as
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4 - 90 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithIgnoreWords(Aws::Vector<Aws::String>&& value) { SetIgnoreWords(std::move(value)); return *this;}

    /**
     * <p>An array that lists specific character sequences (ignore words) to exclude
     * from the results. If the text matched by the regular expression is the same as
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4 - 90 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddIgnoreWords(const Aws::String& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords.push_back(value); return *this; }

    /**
     * <p>An array that lists specific character sequences (ignore words) to exclude
     * from the results. If the text matched by the regular expression is the same as
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4 - 90 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddIgnoreWords(Aws::String&& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists specific character sequences (ignore words) to exclude
     * from the results. If the text matched by the regular expression is the same as
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4 - 90 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddIgnoreWords(const char* value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords.push_back(value); return *this; }


    /**
     * <p>An array that lists specific character sequences (keywords), one of which
     * must be within proximity (maximumMatchDistance) of the regular expression to
     * match. The array can contain as many as 50 keywords. Each keyword can contain 4
     * - 90 characters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeywords() const{ return m_keywords; }

    /**
     * <p>An array that lists specific character sequences (keywords), one of which
     * must be within proximity (maximumMatchDistance) of the regular expression to
     * match. The array can contain as many as 50 keywords. Each keyword can contain 4
     * - 90 characters.</p>
     */
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }

    /**
     * <p>An array that lists specific character sequences (keywords), one of which
     * must be within proximity (maximumMatchDistance) of the regular expression to
     * match. The array can contain as many as 50 keywords. Each keyword can contain 4
     * - 90 characters.</p>
     */
    inline void SetKeywords(const Aws::Vector<Aws::String>& value) { m_keywordsHasBeenSet = true; m_keywords = value; }

    /**
     * <p>An array that lists specific character sequences (keywords), one of which
     * must be within proximity (maximumMatchDistance) of the regular expression to
     * match. The array can contain as many as 50 keywords. Each keyword can contain 4
     * - 90 characters.</p>
     */
    inline void SetKeywords(Aws::Vector<Aws::String>&& value) { m_keywordsHasBeenSet = true; m_keywords = std::move(value); }

    /**
     * <p>An array that lists specific character sequences (keywords), one of which
     * must be within proximity (maximumMatchDistance) of the regular expression to
     * match. The array can contain as many as 50 keywords. Each keyword can contain 4
     * - 90 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithKeywords(const Aws::Vector<Aws::String>& value) { SetKeywords(value); return *this;}

    /**
     * <p>An array that lists specific character sequences (keywords), one of which
     * must be within proximity (maximumMatchDistance) of the regular expression to
     * match. The array can contain as many as 50 keywords. Each keyword can contain 4
     * - 90 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithKeywords(Aws::Vector<Aws::String>&& value) { SetKeywords(std::move(value)); return *this;}

    /**
     * <p>An array that lists specific character sequences (keywords), one of which
     * must be within proximity (maximumMatchDistance) of the regular expression to
     * match. The array can contain as many as 50 keywords. Each keyword can contain 4
     * - 90 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddKeywords(const Aws::String& value) { m_keywordsHasBeenSet = true; m_keywords.push_back(value); return *this; }

    /**
     * <p>An array that lists specific character sequences (keywords), one of which
     * must be within proximity (maximumMatchDistance) of the regular expression to
     * match. The array can contain as many as 50 keywords. Each keyword can contain 4
     * - 90 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddKeywords(Aws::String&& value) { m_keywordsHasBeenSet = true; m_keywords.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists specific character sequences (keywords), one of which
     * must be within proximity (maximumMatchDistance) of the regular expression to
     * match. The array can contain as many as 50 keywords. Each keyword can contain 4
     * - 90 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddKeywords(const char* value) { m_keywordsHasBeenSet = true; m_keywords.push_back(value); return *this; }


    /**
     * <p>The maximum number of characters that can exist between text that matches the
     * regex pattern and the character sequences specified by the keywords array. Macie
     * includes or excludes a result based on the proximity of a keyword to text that
     * matches the regex pattern. The distance can be 1 - 300 characters. The default
     * value is 50.</p>
     */
    inline int GetMaximumMatchDistance() const{ return m_maximumMatchDistance; }

    /**
     * <p>The maximum number of characters that can exist between text that matches the
     * regex pattern and the character sequences specified by the keywords array. Macie
     * includes or excludes a result based on the proximity of a keyword to text that
     * matches the regex pattern. The distance can be 1 - 300 characters. The default
     * value is 50.</p>
     */
    inline bool MaximumMatchDistanceHasBeenSet() const { return m_maximumMatchDistanceHasBeenSet; }

    /**
     * <p>The maximum number of characters that can exist between text that matches the
     * regex pattern and the character sequences specified by the keywords array. Macie
     * includes or excludes a result based on the proximity of a keyword to text that
     * matches the regex pattern. The distance can be 1 - 300 characters. The default
     * value is 50.</p>
     */
    inline void SetMaximumMatchDistance(int value) { m_maximumMatchDistanceHasBeenSet = true; m_maximumMatchDistance = value; }

    /**
     * <p>The maximum number of characters that can exist between text that matches the
     * regex pattern and the character sequences specified by the keywords array. Macie
     * includes or excludes a result based on the proximity of a keyword to text that
     * matches the regex pattern. The distance can be 1 - 300 characters. The default
     * value is 50.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithMaximumMatchDistance(int value) { SetMaximumMatchDistance(value); return *this;}


    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 120 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see the identifier's name, depending on the actions
     * that they're allowed to perform in Amazon Macie.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 120 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see the identifier's name, depending on the actions
     * that they're allowed to perform in Amazon Macie.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 120 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see the identifier's name, depending on the actions
     * that they're allowed to perform in Amazon Macie.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 120 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see the identifier's name, depending on the actions
     * that they're allowed to perform in Amazon Macie.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 120 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see the identifier's name, depending on the actions
     * that they're allowed to perform in Amazon Macie.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 120 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see the identifier's name, depending on the actions
     * that they're allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 120 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see the identifier's name, depending on the actions
     * that they're allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 120 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see the identifier's name, depending on the actions
     * that they're allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The regular expression (regex) that defines the pattern to match. The
     * expression can contain as many as 500 characters.</p>
     */
    inline const Aws::String& GetRegex() const{ return m_regex; }

    /**
     * <p>The regular expression (regex) that defines the pattern to match. The
     * expression can contain as many as 500 characters.</p>
     */
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }

    /**
     * <p>The regular expression (regex) that defines the pattern to match. The
     * expression can contain as many as 500 characters.</p>
     */
    inline void SetRegex(const Aws::String& value) { m_regexHasBeenSet = true; m_regex = value; }

    /**
     * <p>The regular expression (regex) that defines the pattern to match. The
     * expression can contain as many as 500 characters.</p>
     */
    inline void SetRegex(Aws::String&& value) { m_regexHasBeenSet = true; m_regex = std::move(value); }

    /**
     * <p>The regular expression (regex) that defines the pattern to match. The
     * expression can contain as many as 500 characters.</p>
     */
    inline void SetRegex(const char* value) { m_regexHasBeenSet = true; m_regex.assign(value); }

    /**
     * <p>The regular expression (regex) that defines the pattern to match. The
     * expression can contain as many as 500 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithRegex(const Aws::String& value) { SetRegex(value); return *this;}

    /**
     * <p>The regular expression (regex) that defines the pattern to match. The
     * expression can contain as many as 500 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithRegex(Aws::String&& value) { SetRegex(std::move(value)); return *this;}

    /**
     * <p>The regular expression (regex) that defines the pattern to match. The
     * expression can contain as many as 500 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithRegex(const char* value) { SetRegex(value); return *this;}


    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a required tag key and an associated tag value. The maximum
     * length of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_ignoreWords;
    bool m_ignoreWordsHasBeenSet;

    Aws::Vector<Aws::String> m_keywords;
    bool m_keywordsHasBeenSet;

    int m_maximumMatchDistance;
    bool m_maximumMatchDistanceHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_regex;
    bool m_regexHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws