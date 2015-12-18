require 'test_helper'

class PageControllerTest < ActionController::TestCase
  test "should get projects" do
    get :projects
    assert_response :success
  end

  test "should get team" do
    get :team
    assert_response :success
  end

  test "should get philosophy" do
    get :philosophy
    assert_response :success
  end

  test "should get partners" do
    get :partners
    assert_response :success
  end

  test "should get contact" do
    get :contact
    assert_response :success
  end

end
